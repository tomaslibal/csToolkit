#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/linkedList/src/LinkedList.o \
	${OBJECTDIR}/linkedList/src/linkedNode.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptoolkit

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptoolkit: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptoolkit ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/linkedList/src/LinkedList.o: linkedList/src/LinkedList.cpp 
	${MKDIR} -p ${OBJECTDIR}/linkedList/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/linkedList/src/LinkedList.o linkedList/src/LinkedList.cpp

${OBJECTDIR}/linkedList/src/linkedNode.o: linkedList/src/linkedNode.cpp 
	${MKDIR} -p ${OBJECTDIR}/linkedList/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/linkedList/src/linkedNode.o linkedList/src/linkedNode.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f1: ${TESTDIR}/linkedList/test/linkedListTest.o ${TESTDIR}/linkedList/test/linkedListTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/linkedList/test/linkedListTest.o: linkedList/test/linkedListTest.cpp 
	${MKDIR} -p ${TESTDIR}/linkedList/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/linkedList/test/linkedListTest.o linkedList/test/linkedListTest.cpp


${TESTDIR}/linkedList/test/linkedListTestRunner.o: linkedList/test/linkedListTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/linkedList/test
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/linkedList/test/linkedListTestRunner.o linkedList/test/linkedListTestRunner.cpp


${OBJECTDIR}/linkedList/src/LinkedList_nomain.o: ${OBJECTDIR}/linkedList/src/LinkedList.o linkedList/src/LinkedList.cpp 
	${MKDIR} -p ${OBJECTDIR}/linkedList/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/linkedList/src/LinkedList.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/linkedList/src/LinkedList_nomain.o linkedList/src/LinkedList.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/linkedList/src/LinkedList.o ${OBJECTDIR}/linkedList/src/LinkedList_nomain.o;\
	fi

${OBJECTDIR}/linkedList/src/linkedNode_nomain.o: ${OBJECTDIR}/linkedList/src/linkedNode.o linkedList/src/linkedNode.cpp 
	${MKDIR} -p ${OBJECTDIR}/linkedList/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/linkedList/src/linkedNode.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/linkedList/src/linkedNode_nomain.o linkedList/src/linkedNode.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/linkedList/src/linkedNode.o ${OBJECTDIR}/linkedList/src/linkedNode_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptoolkit

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
