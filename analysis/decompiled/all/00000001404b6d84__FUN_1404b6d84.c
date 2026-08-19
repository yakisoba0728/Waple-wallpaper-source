// Function: FUN_1404b6d84
// Addr: 1404b6d84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6d84(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  uint *in_RAX;
  char unaff_BL;
  char unaff_SPL;
  undefined1 *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)(param_2 + -0x7bffe415) = *(char *)(param_2 + -0x7bffe415) + unaff_BL + -0x1b;
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

