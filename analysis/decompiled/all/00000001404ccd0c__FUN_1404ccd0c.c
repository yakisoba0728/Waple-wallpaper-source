// Function: FUN_1404ccd0c
// Addr: 1404ccd0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccd0c(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined4 in_EAX;
  undefined2 *unaff_RDI;
  
  sysenter();
  uVar2 = TaskRegister();
  *unaff_RDI = uVar2;
  pbVar1 = (byte *)((param_2 & 0xffffffff) + 7);
  *pbVar1 = *pbVar1 | (byte)((uint)in_EAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

