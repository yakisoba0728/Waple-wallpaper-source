// Function: FUN_1404cafc0
// Addr: 1404cafc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cafc0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  longlong unaff_RBP;
  int unaff_ESI;
  char *unaff_retaddr;
  
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  bVar1 = *param_1;
  bVar6 = (byte)((ulonglong)unaff_retaddr >> 8);
  *param_1 = *param_1 + bVar6;
  puVar5 = (uint *)((longlong)unaff_retaddr * 2);
  uVar3 = (uint)CARRY1(bVar1,bVar6);
  uVar2 = *puVar5;
  uVar4 = *puVar5 + (uint)unaff_retaddr;
  *puVar5 = uVar4 + uVar3;
  *(uint *)(param_1 + unaff_RBP) =
       *(int *)(param_1 + unaff_RBP) + unaff_ESI +
       (uint)(CARRY4(uVar2,(uint)unaff_retaddr) || CARRY4(uVar4,uVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

