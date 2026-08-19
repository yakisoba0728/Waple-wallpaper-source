// Function: FUN_1404d12a0
// Addr: 1404d12a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d12a0(longlong param_1,longlong param_2,char param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char *in_RAX;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined1 *puVar7;
  byte bVar8;
  undefined6 uVar9;
  byte *unaff_RBX;
  char unaff_BPL;
  undefined7 unaff_00000029;
  char *in_R10;
  char unaff_R12B;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)param_2;
  *param_4 = *param_4 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + bVar8);
  pcVar1 = (char *)(param_1 + 0x1511004d + param_2);
  *pcVar1 = *pcVar1 + unaff_BPL;
  *puVar4 = *puVar4 | (uint)puVar4;
  uVar3 = (uint)puVar4 + 0xff01162;
  pbVar5 = (byte *)(ulonglong)uVar3;
  puVar7 = (undefined1 *)(param_1 + -1);
  if (puVar7 == (undefined1 *)0x0 || uVar3 == 0) {
    *unaff_RBX = *unaff_RBX >> 1 | *unaff_RBX << 7;
    *puVar7 = *puVar7;
    pbVar5[7] = pbVar5[7] | (byte)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *pbVar5;
  bVar6 = (byte)puVar7;
  *pbVar5 = *pbVar5 + bVar6;
  bVar6 = bVar6 + *(char *)CONCAT71(unaff_00000029,unaff_BPL) + CARRY1(bVar2,bVar6);
  pbVar5 = (byte *)CONCAT71((int7)((ulonglong)puVar7 >> 8),bVar6);
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 - bVar8;
  *(byte *)CONCAT62(uVar9,CONCAT11(0x2b,bVar8)) =
       (*(char *)CONCAT62(uVar9,CONCAT11(0x2b,bVar8)) - bVar8) -
       (CARRY1(bVar6,*(byte *)CONCAT71(unaff_00000029,unaff_BPL)) ||
       CARRY1(bVar6 + *(char *)CONCAT71(unaff_00000029,unaff_BPL),bVar2 < bVar8));
  *in_R10 = *in_R10 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

