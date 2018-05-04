/******************************************************************************
*
*   (c) Copyright 2004-2016 NXP Semiconductors, Inc.
*   All Rights Reserved.
*
******************************************************************************/
/*!
*
*   @file    freemaster_cfg.h
*
*   @brief   FreeMASTER Serial Communication Driver configuration file.
*
******************************************************************************/

#ifndef __FREEMASTER_CFG_H
#define __FREEMASTER_CFG_H

/******************************************************************************
* Select interrupt or poll-driven serial communication
******************************************************************************/

#define FMSTR_LONG_INTR        0    /* complete message processing in interrupt */
#define FMSTR_SHORT_INTR       1    /* SCI FIFO-queuing done in interrupt */
#define FMSTR_POLL_DRIVEN      0    /* no interrupt needed, polling only */

/*****************************************************************************
* Select communication interface (SCI/FlexCAN base address)
******************************************************************************/

#define FMSTR_SCI_BASE         0xFBE84000UL /* LINFlex0 base on MPC574xP */
#define FMSTR_CAN_BASE         0xFFEC0000UL /* FlexCAN0 base on MPC574xP */

#define FMSTR_DISABLE          0    /* To disable all FreeMASTER functionalities */
#define FMSTR_USE_SCI          1    /* To select SCI communication interface */
#define FMSTR_USE_FLEXCAN      0    /* To select FlexCAN communication interface */
#define FMSTR_USE_PDBDM        0    /* To select Packet Driven BDM communication interface (optional) */

/* select RX and TX FlexCAN Message buffers */
#define FMSTR_FLEXCAN_TXMB     0
#define FMSTR_FLEXCAN_RXMB     1

/******************************************************************************
* Input/output communication buffer size
******************************************************************************/

#define FMSTR_COMM_BUFFER_SIZE 0    /* set to 0 for "automatic" */

/******************************************************************************
* Receive FIFO queue size (use with FMSTR_SHORT_INTR only)
******************************************************************************/

#define FMSTR_COMM_RQUEUE_SIZE 32   /* set to 0 for "default" */

/*****************************************************************************
* When RAM or ROM resources are limited, exclude some of the FreeMASTER 
* features by default in the demo application 
******************************************************************************/
#if 1
#define FMSTR_DEMO_ENOUGH_RAM 1
#define FMSTR_DEMO_ENOUGH_ROM 1
#define FMSTR_DEMO_LARGE_ROM  1
#else
#define FMSTR_DEMO_ENOUGH_RAM 0
#define FMSTR_DEMO_ENOUGH_ROM 0
#define FMSTR_DEMO_LARGE_ROM  0
#endif

/* configure example application to match physical capabilities of the CPU */
#define FMSTR_DEMO_SUPPORT_I64 1
#define FMSTR_DEMO_SUPPORT_FLT 1
#define FMSTR_DEMO_SUPPORT_DBL 1

/*****************************************************************************
* Support for Application Commands 
******************************************************************************/

#define FMSTR_USE_APPCMD       FMSTR_DEMO_ENOUGH_ROM    /* enable/disable App.Commands support */
#define FMSTR_APPCMD_BUFF_SIZE 32   /* App.Command data buffer size */
#define FMSTR_MAX_APPCMD_CALLS 4    /* how many app.cmd callbacks? (0=disable) */

/*****************************************************************************
* Oscilloscope support
******************************************************************************/

#define FMSTR_USE_SCOPE       FMSTR_DEMO_ENOUGH_RAM     /* enable/disable scope support */
#define FMSTR_MAX_SCOPE_VARS  8     /* max. number of scope variables (2..8) */

/*****************************************************************************
* Recorder support
******************************************************************************/

#define FMSTR_USE_RECORDER    FMSTR_DEMO_ENOUGH_RAM     /* enable/disable recorder support */
#define FMSTR_MAX_REC_VARS    8     /* max. number of recorder variables (2..8) */
#define FMSTR_REC_OWNBUFF     0     /* use user-allocated rec. buffer (1=yes) */

/* built-in recorder buffer (use when FMSTR_REC_OWNBUFF is 0) */
#define FMSTR_REC_BUFF_SIZE   512   /* built-in buffer size */

/* recorder time base, specifies how often the recorder is called in the user app. */
#define FMSTR_REC_TIMEBASE    FMSTR_REC_BASE_MILLISEC(0) /* 0 = "unknown" */

#define FMSTR_REC_FLOAT_TRIG   0    /* enable/disable floating point triggering */

/*****************************************************************************
* Target-side address translation (TSA)
******************************************************************************/

#define FMSTR_USE_TSA          0    /* enable TSA functionality */
#define FMSTR_USE_TSA_INROM    1    /* TSA tables to ROM or RAM */
#define FMSTR_USE_TSA_SAFETY  FMSTR_DEMO_ENOUGH_RAM     /* enable access to TSA variables only */
#define FMSTR_USE_TSA_DYNAMIC FMSTR_DEMO_ENOUGH_RAM     /* enable dynamic TSA table */

/*****************************************************************************
* Pipes as data streaming over FreeMASTER protocol
******************************************************************************/

#define FMSTR_USE_PIPES        1   /* Enable/Disable pipes */
#define FMSTR_MAX_PIPES_COUNT  3   /* 3 pipes for demo purposes */

/*****************************************************************************
* Enable/Disable read/write memory commands
******************************************************************************/

#define FMSTR_USE_READMEM      1    /* enable read memory commands */
#define FMSTR_USE_WRITEMEM     1    /* enable write memory commands */
#define FMSTR_USE_WRITEMEMMASK 1    /* enable write memory bits commands */

/*****************************************************************************
* Enable/Disable read/write variable commands (a bit faster than Read Mem)
******************************************************************************/

#define FMSTR_USE_READVAR      1    /* enable read variable fast commands */
#define FMSTR_USE_WRITEVAR     1    /* enable write variable fast commands */
#define FMSTR_USE_WRITEVARMASK 1    /* enable write variable bits fast commands */

#endif /* __FREEMASTER_CFG_H */
