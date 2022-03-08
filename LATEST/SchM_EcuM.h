#pragma once
/*****************************************************/
/* File   : SchM_EcuM.h                              */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_SchM_EcuM{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      virtual FUNC(void, SCHM_CODE) Start       (void) = 0;
      virtual FUNC(void, SCHM_CODE) StartTiming (void) = 0;
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern infEcuMClient* gptrinfEcuMClient_SchM;
extern interface_SchM_EcuM*   gptrinfSchM_EcuM;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

