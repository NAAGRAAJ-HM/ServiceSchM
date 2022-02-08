/*****************************************************/
/* File   : SchM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "SchM.h"

#include "SchM_EcuM.h"
#include "SchM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_SchM_EcuM SchM_EcuM;
class_EcuM_Client *EcuM_Client_ptr_SchM = &SchM_EcuM;
class_SchM SchM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SCHM_CODE) class_SchM_EcuM::InitFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM_EcuM::DeInitFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM::ActMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM::CancelMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM::Start(void){
}

FUNC(void, SCHM_CODE) class_SchM::StartTiming(void){
}

FUNC(void, SCHM_CODE) class_SchM::GetVersionInfo(void){
}

FUNC(void, SCHM_CODE) class_SchM::Enter(void){
}

FUNC(void, SCHM_CODE) class_SchM::Exit(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/
