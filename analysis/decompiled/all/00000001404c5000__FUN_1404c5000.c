// Function: FUN_1404c5000
// Addr: 1404c5000
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5000(byte *param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar10;
  char *in_RAX;
  undefined7 uVar11;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RSI;
  int unaff_EDI;
  bool bVar13;
  uint *puVar7;
  
  bVar3 = (byte)in_RAX;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  if (param_1 != (byte *)0x0) {
    *in_RAX = *in_RAX + bVar3;
    *in_RAX = *in_RAX + bVar3;
    bVar10 = *param_1;
    *param_1 = *param_1 + bVar3;
    cVar2 = bVar3 + 8 + CARRY1(bVar10,bVar3);
    puVar7 = (uint *)CONCAT71(uVar11,cVar2);
    *puVar7 = *puVar7 | (uint)puVar7;
    bVar3 = cVar2 + 0x54;
    pbVar8 = (byte *)CONCAT71(uVar11,bVar3);
    *pbVar8 = *pbVar8 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX;
  bVar10 = (byte)((ulonglong)in_RAX >> 8);
  bVar13 = CARRY1(bRam0000000000000000,bVar10);
  bRam0000000000000000 = bRam0000000000000000 + bVar10;
  bVar3 = (bVar3 - 8) - bVar13;
  (&stack0x00000000)[(longlong)unaff_RSI * 8] =
       (&stack0x00000000)[(longlong)unaff_RSI * 8] + unaff_BL;
  *(byte *)CONCAT71(uVar11,bVar3) = *(byte *)CONCAT71(uVar11,bVar3) | bVar3;
  uVar4 = ((uint)CONCAT71(uVar11,bVar3 - 0x2c | *(byte *)CONCAT71(uVar11,bVar3 - 0x2c)) | 100) +
          0xf0000d54;
  uVar5 = *param_2;
  pcVar12 = (char *)(ulonglong)uVar5;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(uint *)CONCAT71(unaff_00000019,unaff_BL) & (uint)param_2;
  pcVar9 = (char *)(ulonglong)uVar4;
  iVar1 = *(int *)(pcVar9 + 2);
  *pcVar9 = *pcVar9 + (char)uVar5;
  cVar2 = (char)((ulonglong)param_2 >> 8) * '\x02';
  pcVar9 = (undefined1 *)(ulonglong)(uint)(unaff_EDI + iVar1) + (longlong)pcVar12 * 2 + 0x4c;
  *pcVar9 = *pcVar9 + (char)(uVar5 >> 8);
  *pcVar12 = *pcVar12 + (char)(uVar4 >> 8);
  uVar5 = (uVar4 ^ 0x11) + 0x68050002;
  iVar6 = uVar5 + *(int *)(ulonglong)uVar5;
  out(*unaff_RSI,CONCAT11(cVar2,(char)param_2));
  if (pcVar12 == (char *)0x1 || iVar6 != 0) {
    pcVar9 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                               CONCAT22((short)((ulonglong)param_2 >> 0x10),
                                        CONCAT11(cVar2,(char)param_2))) + -0x73ffd21f);
    *pcVar9 = *pcVar9 + (char)((uint)iVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(ulonglong)(uint)(unaff_EDI + iVar1) = *(undefined1 *)(unaff_RSI + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

