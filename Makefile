SRC_FILES =chambre.cpp main2.cpp client.cpp main3.cpp date.cpp main1.cpp hotel.cpp main4.cpp
APP =app
CXX = g++
CXXFLAGS =-Wall -std=c++17
DEPFLAGS =-MMD
LDFLAGS=
BUILDIR =build
OBJ_FILES =$(patsubst %.cpp, $(BUILDIR)/%.o, $(SRC_FILES))
BINDIR =bin
TARGET =$(BINDIR)/$(APP)
DEPS  =$(OBJ_FILES:.o=.d)


all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJ_FILES)

$(BUILDIR)/%.o: %.cpp
	@mkdir -p $(BUILDIR)
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@
	
clean:
	rm -rf $(BUILDIR)
	rm -rf $(BINDIR)

-include $(DEPS)

.PHONY: all clean
