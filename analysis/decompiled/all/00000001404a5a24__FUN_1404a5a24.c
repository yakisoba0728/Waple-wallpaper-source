// Function: FUN_1404a5a24
// Addr: 1404a5a24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a59bf) overlaps instruction at (ram,0x0001404a59bd)
    */

void FUN_1404a5a24(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char cVar6;
  byte *in_RAX;
  byte bVar7;
  char cVar9;
  char *pcVar8;
  byte unaff_BL;
  bool bVar10;
  byte *pbVar5;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  in_RAX[2] = in_RAX[2] + cVar9;
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  in_RAX[-0x79] = in_RAX[-0x79] + cVar6;
  bVar2 = (byte)in_RAX;
  *in_RAX = *in_RAX | bVar2;
  iVar3 = (int)in_RAX;
  if ((POPCOUNT(*in_RAX) & 1U) == 0) {
    *in_RAX = *in_RAX | bVar2;
    *param_4 = *param_4;
    *in_RAX = *in_RAX + bVar2;
    in_RAX[-0x79] = in_RAX[-0x79] + cVar6;
    bVar10 = false;
    *in_RAX = *in_RAX | bVar2;
    if ((POPCOUNT(*in_RAX) & 1U) == 0) {
      *in_RAX = *in_RAX | bVar2;
      *param_4 = *param_4;
      uVar4 = iVar3 + 0x68050002;
      uVar1 = (undefined3)(uVar4 >> 8);
      bVar2 = (char)uVar4 + *(char *)(ulonglong)uVar4;
      pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
      pbVar5[-0x77ddfff8] = pbVar5[-0x77ddfff8] + (byte)param_1;
      *pbVar5 = *pbVar5 | bVar2;
      *param_4 = *param_4;
      *param_2 = *param_2 + bVar2;
      *pbVar5 = *pbVar5 + bVar2;
      *pbVar5 = *pbVar5 | bVar2;
      bVar7 = (byte)param_1 & pbVar5[-0x1057fff8];
      *param_4 = *param_4 + -8;
      *pbVar5 = *pbVar5 + bVar2;
      *pbVar5 = *pbVar5 + bVar2;
      *pbVar5 = bVar7;
      cVar6 = (char)(uVar4 >> 8);
      *param_2 = *param_2 + cVar6;
      *pbVar5 = bVar7;
      pbVar5[0x10049ef] = pbVar5[0x10049ef] + cVar9;
      bVar2 = bVar2 | bRam0000000146cc6483;
      pbVar5 = (byte *)(ulonglong)CONCAT31(uVar1,bVar2);
      pcVar8 = (char *)(CONCAT71((int7)((ulonglong)param_1 >> 8),bVar7) + -1);
      if (pcVar8 == (char *)0x0 || bVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pbVar5 = *pbVar5 ^ bVar2;
      *pcVar8 = *pcVar8 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if ('\0' < (char)*in_RAX) {
      *param_1 = *param_1 + (char)param_2;
      return;
    }
    pbVar5 = in_RAX + 0x1004a58;
    bVar7 = *pbVar5;
    *pbVar5 = *pbVar5 + unaff_BL;
    bVar10 = SCARRY4(iRam000000014b0c6ac3,iVar3) !=
             SCARRY4(iRam000000014b0c6ac3 + iVar3,(uint)CARRY1(bVar7,unaff_BL));
    iRam000000014b0c6ac3 = iRam000000014b0c6ac3 + iVar3 + (uint)CARRY1(bVar7,unaff_BL);
    if (param_1 != (char *)0x1 && iRam000000014b0c6ac3 != 0) {
      *in_RAX = *in_RAX | bVar2;
      goto FUN_1404a59d0;
    }
  }
  if (!bVar10) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX | bVar2;
FUN_1404a59d0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

