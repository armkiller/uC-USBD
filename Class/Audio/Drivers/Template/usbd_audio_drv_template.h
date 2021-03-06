/*
*********************************************************************************************************
*                                            EXAMPLE CODE
*
*               This file is provided as an example on how to use Micrium products.
*
*               Please feel free to use any application code labeled as 'EXAMPLE CODE' in
*               your application products.  Example code may be used as is, in whole or in
*               part, or may be used as a reference only. This file can be modified as
*               required to meet the end-product requirements.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                   USB AUDIO CODEC DRIVER TEMPLATE
*
* Filename : usbd_audio_drv_template.h
* Version  : V4.06.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) This USB device configuration header file is protected from multiple pre-processor
*               inclusion through use of the USB device configuration module present pre-processor
*               macro definition.
*********************************************************************************************************
*/

#ifndef  USBD_AUDIO_DRV_TEMPLATE_MODULE_PRESENT                 /* See Note #1.                                         */
#define  USBD_AUDIO_DRV_TEMPLATE_MODULE_PRESENT


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  "../../usbd_audio_processing.h"


/*
*********************************************************************************************************
*                            USB AUDIO FUNCTION TOPOLOGY 1 CONFIGURATION
*********************************************************************************************************
*/

extern  const  USBD_AUDIO_DRV_COMMON_API  USBD_Audio_DrvCommonAPI_Template;
extern  const  USBD_AUDIO_DRV_AC_OT_API   USBD_Audio_DrvOT_API_Template;
extern  const  USBD_AUDIO_DRV_AC_FU_API   USBD_Audio_DrvFU_API_Template;
extern  const  USBD_AUDIO_DRV_AC_MU_API   USBD_Audio_DrvMU_API_Template;
extern  const  USBD_AUDIO_DRV_AC_SU_API   USBD_Audio_DrvSU_API_Template;
extern  const  USBD_AUDIO_DRV_AS_API      USBD_Audio_DrvAS_API_Template;


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif
