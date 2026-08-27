// Function: FUN_1400fdda0
// Addr: 1400fdda0
// Size: 131 bytes


undefined8 FUN_1400fdda0(char *param_1,char *param_2)

{
  char cVar1;
  
  if ((((*param_1 == *param_2) && (*(float *)(param_1 + 4) == *(float *)(param_2 + 4))) &&
      (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))) &&
     (((*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc) &&
       (*(float *)(param_1 + 0x10) == *(float *)(param_2 + 0x10))) &&
      ((cVar1 = FUN_14000d0f0(param_1 + 0x18,param_2 + 0x18), cVar1 != '\0' &&
       (*(float *)(param_1 + 0x38) == *(float *)(param_2 + 0x38))))))) {
    return 1;
  }
  return 0;
}

