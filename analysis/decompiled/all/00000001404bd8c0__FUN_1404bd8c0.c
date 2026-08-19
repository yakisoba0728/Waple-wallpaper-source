// Function: FUN_1404bd8c0
// Addr: 1404bd8c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd8c0(undefined1 *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  ulonglong in_RAX;
  char *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char *pcStackX_8;
  char *pcVar2;
  
  *unaff_RDI = *unaff_RSI;
  cVar1 = unaff_RBX[in_RAX & 0xff];
  pcVar2 = (char *)CONCAT71((int7)(in_RAX >> 8),cVar1);
  *param_4 = *param_4;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[-0x59ffdabe] = pcVar2[-0x59ffdabe] + (char)param_2;
  *param_1 = *param_1;
  *pcStackX_8 = (char)param_1;
  *param_2 = *param_2 + (char)param_2;
  *(int *)(unaff_RDI + 1) = *(int *)(unaff_RDI + 1) + (int)param_2;
  *unaff_RBX = *unaff_RBX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

