// Function: FUN_1404c541c
// Addr: 1404c541c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5447) overlaps instruction at (ram,0x0001404c5446)
    */

void FUN_1404c541c(byte *param_1,char *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *in_RAX;
  char cVar8;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  byte bVar3;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  puVar1 = (uint *)(param_1 + (longlong)&stack0x00000000);
  uVar7 = *puVar1;
  uVar5 = *puVar1 - (uint)&stack0x00000000;
  *puVar1 = uVar5 - in_CF;
  puVar1 = (uint *)(param_1 + CONCAT71(unaff_00000019,unaff_BL));
  uVar5 = (uint)(uVar7 < (uint)&stack0x00000000 || uVar5 < in_CF);
  uVar7 = *puVar1;
  uVar6 = *puVar1 - (uint)param_2;
  *puVar1 = uVar6 - uVar5;
  *(uint *)(param_1 + (longlong)param_2) =
       (*(int *)(param_1 + (longlong)param_2) - unaff_ESI) -
       (uint)(uVar7 < (uint)param_2 || uVar6 < uVar5);
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  bVar3 = *param_1;
  if (CARRY1(bVar2,unaff_BL)) {
    *(char *)in_RAX = (char)*in_RAX + (char)((ulonglong)in_RAX >> 8);
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
    *(char *)in_RAX = (char)*in_RAX + cVar8;
  }
  else {
    param_1 = param_1 + -1;
    if (param_1 == (byte *)0x0 || bVar3 == 0) {
      *param_2 = *param_2 + unaff_BL;
      *in_RAX = *in_RAX + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)in_RAX = (char)*in_RAX + cVar8;
  iVar4 = *in_RAX;
  *param_1 = *param_1 + unaff_BL;
  uVar7 = (int)in_RAX + iVar4 & 0x5416000a;
  *(int *)(ulonglong)uVar7 = *(int *)(ulonglong)uVar7 + uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

