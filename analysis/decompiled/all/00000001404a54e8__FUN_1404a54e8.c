// Function: FUN_1404a54e8
// Addr: 1404a54e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5522) overlaps instruction at (ram,0x0001404a5521)
    */

void FUN_1404a54e8(byte *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  byte *in_RAX;
  undefined7 uVar7;
  byte *pbVar8;
  char cVar9;
  byte bVar10;
  undefined6 uVar11;
  byte bVar12;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  char *pcVar6;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar9 = (char)param_2;
  *(int *)param_1 = *(int *)param_1 + unaff_EBX;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar5 = (byte)in_RAX | *in_RAX;
  pcVar6 = (char *)CONCAT71(uVar7,bVar5);
  puVar1 = (uint *)(pcVar6 + (longlong)param_2);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 - (uint)&stack0x00000000;
  *(uint *)(param_1 + unaff_RDI) =
       (*(int *)(param_1 + unaff_RDI) - unaff_ESI) - (uint)(uVar4 < (uint)&stack0x00000000);
  bVar10 = *param_1;
  bVar12 = (byte)unaff_EBX;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar12;
  if (!CARRY1(bVar10,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar8 = param_1 + -1;
  if (pbVar8 == (byte *)0x0 || *param_1 == 0) {
    if (!SCARRY1(bVar2,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar6 = *pcVar6 + bVar5;
    *param_2 = *param_2 + (int)pbVar8;
  }
  else {
    cVar9 = cVar9 + *pcVar6;
    *pbVar8 = *pbVar8 + bVar5;
    bVar5 = bVar5 | *(byte *)((longlong)pcVar6 * 2);
  }
  pcVar6 = (char *)CONCAT71(uVar7,bVar5);
  bVar10 = (byte)((ulonglong)param_2 >> 8) | pbVar8[CONCAT44(unaff_00000034,unaff_ESI)];
  cVar3 = *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9));
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,cVar9)) + (char)pbVar8;
  if (SCARRY1(cVar3,(char)pbVar8)) {
    pcVar6 = (char *)(ulonglong)((uint)pcVar6 | 0x8af42b00);
  }
  *pcVar6 = *pcVar6 + (char)((ulonglong)pcVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

