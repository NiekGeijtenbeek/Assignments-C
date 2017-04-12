##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=Assignment5_2
ConfigurationName      :=Release
WorkspacePath          :=C:/Users/Niek/Documents/Opdrachten
ProjectPath            :=C:/Users/Niek/Documents/Opdrachten/Assignment5_2
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Niek
Date                   :=12/04/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Assignment5_2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/stack.c$(ObjectSuffix) $(IntermediateDirectory)/stackcheck.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Release"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/stack.c$(ObjectSuffix): stack.c $(IntermediateDirectory)/stack.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Niek/Documents/Opdrachten/Assignment5_2/stack.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/stack.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/stack.c$(DependSuffix): stack.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/stack.c$(ObjectSuffix) -MF$(IntermediateDirectory)/stack.c$(DependSuffix) -MM stack.c

$(IntermediateDirectory)/stack.c$(PreprocessSuffix): stack.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/stack.c$(PreprocessSuffix) stack.c

$(IntermediateDirectory)/stackcheck.c$(ObjectSuffix): stackcheck.c $(IntermediateDirectory)/stackcheck.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Niek/Documents/Opdrachten/Assignment5_2/stackcheck.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/stackcheck.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/stackcheck.c$(DependSuffix): stackcheck.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/stackcheck.c$(ObjectSuffix) -MF$(IntermediateDirectory)/stackcheck.c$(DependSuffix) -MM stackcheck.c

$(IntermediateDirectory)/stackcheck.c$(PreprocessSuffix): stackcheck.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/stackcheck.c$(PreprocessSuffix) stackcheck.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


