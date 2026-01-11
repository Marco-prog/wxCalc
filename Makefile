# Percorsi include e librerie
WX_INCLUDE = C:/msys64/ucrt64/include/wx-3.3
WX_SETUP   = C:/msys64/ucrt64/lib/wx/include/msw-unicode-3.3
WX_LIB     = C:/msys64/ucrt64/lib

# Librerie wxWidgets comuni
WX_LIBS = -lwx_baseu-3.3 -lwx_mswu_core-3.3 -lwx_mswu_aui-3.3 \
          -lwx_mswu_adv-3.3 -lwx_mswu_html-3.3 -lwx_mswu_propgrid-3.3 -lwx_mswu_richtext-3.3

# Nome eseguibile
TARGET = main.exe

# Sorgenti
SRC = main.cpp mainFrame.cpp MyFrame.cpp

# Compilatore e flags
CXX = g++
CXXFLAGS = -I$(WX_INCLUDE) -I$(WX_SETUP)
LDFLAGS  = -L$(WX_LIB) $(WX_LIBS) -mwindows

# Target di default
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(SRC) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET)

# Pulisce i file generati
clean:
	-rm -f $(TARGET) *.o
