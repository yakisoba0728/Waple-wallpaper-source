// Function: FUN_1404ba648
// Addr: 1404ba648
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba648(undefined8 param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  byte *in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  uint *puVar3;
  
  uRam00000001b450a650 = uRam00000001b450a650 & (uint)in_RAX;
  *in_RAX = *in_RAX | (byte)in_RAX;
  *in_RAX = *in_RAX & (byte)in_RAX;
  *unaff_RDI = *unaff_RSI;
  *param_4 = *param_4;
  uVar2 = (uint)in_RAX + 0xe4050002;
  puVar3 = (uint *)(ulonglong)uVar2;
  *puVar3 = *puVar3 | uVar2;
  cVar1 = (char)uVar2;
  out(0x20,cVar1);
  *(char *)((longlong)puVar3 + -0x5b) = *(char *)((longlong)puVar3 + -0x5b) + ' ';
  *param_4 = *param_4;
  *param_2 = *param_2 + cVar1;
  *(char *)puVar3 = (char)*puVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

