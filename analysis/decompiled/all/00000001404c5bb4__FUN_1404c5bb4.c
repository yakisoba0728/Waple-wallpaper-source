// Function: FUN_1404c5bb4
// Addr: 1404c5bb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5bb5) overlaps instruction at (ram,0x0001404c5bb4)
    */

void FUN_1404c5bb4(longlong param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  ulonglong in_RAX;
  char *pcVar8;
  char in_ZF;
  longlong lVar7;
  
  pcVar8 = (char *)(param_1 + -1);
  if (pcVar8 != (char *)0x0 && in_ZF == '\0') {
    *(char *)(in_RAX - 0x68ffd11c) = *(char *)(in_RAX - 0x68ffd11c) + (char)in_RAX;
    bVar5 = in(0x2e);
    lVar7 = CONCAT71((int7)(in_RAX >> 8),bVar5);
    pbVar1 = (byte *)(lVar7 + 0x210049e1);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar5;
    puVar4 = (uint *)(lVar7 * 2);
    uVar6 = *puVar4;
    uVar3 = *puVar4 + (uint)lVar7;
    *puVar4 = uVar3 + CARRY1(bVar2,bVar5);
    *(uint *)(pcVar8 + lVar7) =
         *(int *)(pcVar8 + lVar7) + param_2 +
         (uint)(CARRY4(uVar6,(uint)lVar7) || CARRY4(uVar3,(uint)CARRY1(bVar2,bVar5)));
    uVar6 = in(0x2e);
    in_RAX = (ulonglong)uVar6;
    *pcVar8 = *pcVar8 + (char)param_2;
  }
  *pcVar8 = *pcVar8 + (char)param_2;
  out(0x2e,(char)in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

