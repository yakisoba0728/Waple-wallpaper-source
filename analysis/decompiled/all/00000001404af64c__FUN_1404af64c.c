// Function: FUN_1404af64c
// Addr: 1404af64c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af64c(char *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int in_EAX;
  uint uVar3;
  int unaff_EBX;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined8 *unaff_retaddr;
  
  *param_1 = *param_1 + (char)unaff_retaddr;
  uVar3 = in_EAX + 0x64050002;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + unaff_EBX;
  bVar1 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + (byte)param_1;
  uVar2 = in((short)*unaff_retaddr);
  *unaff_RDI = uVar2;
  *param_1 = *param_1 + (char)unaff_retaddr + '\b';
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + CARRY1(bVar1,(byte)param_1)) + 0x74050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

