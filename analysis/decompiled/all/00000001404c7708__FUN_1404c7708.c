// Function: FUN_1404c7708
// Addr: 1404c7708
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c770e) */
/* WARNING: Removing unreachable block (ram,0x0001404c7712) */
/* WARNING: Removing unreachable block (ram,0x0001404c76e2) */

void FUN_1404c7708(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  char cVar6;
  byte *in_RAX;
  byte bVar7;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_ESI;
  undefined4 unaff_00000034;
  bool bVar8;
  byte *pbVar5;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  bVar2 = (byte)in_RAX;
  *in_RAX = *in_RAX ^ bVar2;
  *in_RAX = *in_RAX | bVar2;
  *(int *)in_RAX = *(int *)in_RAX - unaff_ESI;
  pbVar5 = (byte *)(param_2 + 0x50003019);
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  if (CARRY1(bVar3,bVar2) || *pbVar5 == 0) {
    cRam00000001504c7a0d = cRam00000001504c7a0d + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar6;
  *in_RAX = *in_RAX + bVar2;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30] + unaff_BL;
  pbVar5 = (byte *)(param_2 + 0x50003019);
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  if (CARRY1(bVar3,bVar2) || *pbVar5 == 0) {
    *param_1 = *param_1 + cVar6;
    *in_RAX = *in_RAX + bVar2;
    *in_RAX = *in_RAX + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + cVar6;
  *in_RAX = *in_RAX + bVar2;
  bVar8 = CARRY1(*in_RAX,bVar7);
  *in_RAX = *in_RAX + bVar7;
  do {
    *(uint *)in_RAX = (*(int *)in_RAX - unaff_ESI) - (uint)bVar8;
    param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30] =
         param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30] + unaff_BL;
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                     CONCAT44(unaff_00000034,unaff_ESI) * 2);
    *pcVar1 = *pcVar1 + (char)in_RAX;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    uVar4 = (int)in_RAX + 0x74050002;
    pbVar5 = (byte *)(ulonglong)uVar4;
    bVar3 = (byte)uVar4;
    bVar8 = CARRY1(bVar3,*pbVar5);
    in_RAX = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3 + *pbVar5);
  } while (SCARRY1(bVar3,*pbVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

