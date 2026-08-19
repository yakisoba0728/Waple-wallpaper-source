// Function: FUN_1404ae0ec
// Addr: 1404ae0ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ae115) overlaps instruction at (ram,0x0001404ae114)
    */

void FUN_1404ae0ec(longlong param_1,int param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte *in_RAX;
  undefined7 uVar6;
  byte *pbVar7;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool bVar8;
  char *pcStack_8;
  char *pcVar5;
  
  *param_4 = *param_4;
  bVar4 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar4;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + bVar4;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = bVar4 + *in_RAX + CARRY1(bVar2,bVar4);
  pcVar5 = (char *)CONCAT71(uVar6,bVar4);
  bVar2 = *param_4;
  *param_4 = *param_4 + bVar4;
  *pcVar5 = (*pcVar5 - (char)param_1) - CARRY1(bVar2,bVar4);
  *pcVar5 = *pcVar5 + '\x12';
  bVar8 = SCARRY4(iRam00000001483aea0b,unaff_ESI);
  iRam00000001483aea0b = iRam00000001483aea0b + unaff_ESI;
  pbVar7 = (byte *)(param_1 + -1);
  if (pbVar7 == (byte *)0x0 || iRam00000001483aea0b == 0) {
    if (!bVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    param_2 = CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + pcVar5[1]);
    pcVar5 = (char *)(CONCAT71(uVar6,bVar4) & 0xffffffffffffff0b);
  }
  pcStack_8 = pcVar5;
  *(int *)(param_1 + 0xbb120011) = *(int *)(param_1 + 0xbb120011) + (int)&pcStack_8;
  pcVar1 = (char *)((longlong)&pcStack_8 + CONCAT44(unaff_00000034,unaff_ESI));
  *pcVar1 = *pcVar1 + (char)((ulonglong)pcVar5 >> 8);
  *pbVar7 = *pbVar7 | (byte)pcVar5;
  pcVar5 = (char *)((ulonglong)pcVar5 & 0xffffffffffffff01);
  *pcVar5 = *pcVar5 + '\x01';
  uVar3 = (int)pcVar5 + 0x11e013f0;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  *(int *)pbVar7 = *(int *)pbVar7 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

