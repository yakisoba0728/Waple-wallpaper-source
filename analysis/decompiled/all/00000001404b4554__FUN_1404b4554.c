// Function: FUN_1404b4554
// Addr: 1404b4554
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4554(byte *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar4;
  int in_EAX;
  uint uVar3;
  longlong unaff_RBX;
  char *unaff_RDI;
  char in_CF;
  longlong unaff_retaddr;
  undefined2 auStackX_8 [16];
  
  *(char *)(unaff_RBX + 0x4a) =
       (*(char *)(unaff_RBX + 0x4a) - (char)((ulonglong)param_1 >> 8)) - in_CF;
  bVar2 = *param_1;
  *param_1 = *param_1 + (byte)in_EAX;
  uVar3 = in_EAX + 0x1150005 + (uint)CARRY1(bVar2,(byte)in_EAX);
  bVar2 = (byte)uVar3;
  *unaff_RDI = *unaff_RDI + bVar2;
  if (param_1 == (byte *)0x1 || *unaff_RDI == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(param_2 + (ulonglong)uVar3) = *(uint *)(param_2 + (ulonglong)uVar3) & uVar3;
  *(byte *)(auStackX_8 + unaff_retaddr * 4) = *(char *)(auStackX_8 + unaff_retaddr * 4) + bVar2;
  bVar4 = (byte)(uVar3 >> 8);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2 + bVar4);
  cVar1 = in(auStackX_8[0]);
  *unaff_RDI = cVar1;
  *(int *)(ulonglong)uVar3 = (*(int *)(ulonglong)uVar3 - uVar3) - (uint)CARRY1(bVar2,bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

