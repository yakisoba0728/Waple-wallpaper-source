// Function: FUN_1404a1f8c
// Addr: 1404a1f8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1f8c(byte *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar6;
  byte *in_RAX;
  undefined7 uVar7;
  uint *puVar5;
  byte bVar8;
  byte *pbVar9;
  byte *unaff_RSI;
  longlong in_FS_OFFSET;
  byte bVar10;
  undefined6 uVar11;
  
  *param_2 = *param_2 + (int)param_1;
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)((ulonglong)param_2 >> 8) | param_1[(longlong)param_2];
  pbVar9 = (byte *)CONCAT62(uVar11,CONCAT11(bVar10,(char)param_2));
  bVar6 = *pbVar9;
  bVar8 = (byte)param_1;
  bVar1 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar8;
  *unaff_RSI = *unaff_RSI << (bVar8 & 7) | *unaff_RSI >> 8 - (bVar8 & 7);
  bVar2 = ((ulonglong)param_1 & 0x1f) != 0;
  bVar3 = (bVar8 & 0x1f) == 1;
  bVar4 = (byte)in_RAX;
  if ((bVar3 || !SCARRY1(bVar1,bVar8)) &&
      (!bVar3 ||
      (!bVar2 && CARRY1(bVar6,bVar8) || bVar2 && (*unaff_RSI & 1) != 0) == (char)*unaff_RSI < '\0'))
  {
    *pbVar9 = *pbVar9 | bVar4;
    bVar6 = *in_RAX;
    *in_RAX = *in_RAX + bVar8;
    in_RAX[in_FS_OFFSET] = in_RAX[in_FS_OFFSET] + bVar4 + CARRY1(bVar6,bVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar10 = bVar10 + *in_RAX;
  pbVar9 = (byte *)CONCAT62(uVar11,CONCAT11(bVar10,(char)param_2));
  *(int *)in_RAX = *(int *)in_RAX + (int)param_1;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  *pbVar9 = *pbVar9 | bVar10;
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 ^ bVar6;
  puVar5 = (uint *)CONCAT71(uVar7,(bVar4 + 0x70 | *(byte *)CONCAT71(uVar7,bVar4 + 0x70)) ^ bVar6);
  *puVar5 = *puVar5 | (uint)puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

