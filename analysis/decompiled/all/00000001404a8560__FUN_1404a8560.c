// Function: FUN_1404a8560
// Addr: 1404a8560
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a85ff) overlaps instruction at (ram,0x0001404a85fc)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a85ff) */

void FUN_1404a8560(longlong param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char cVar8;
  char *pcVar5;
  uint *in_RAX;
  byte bVar9;
  uint *puVar7;
  undefined1 *puVar10;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_ZF;
  longlong lStackX_8;
  char *pcVar6;
  
  cVar8 = (char)param_2;
  puVar10 = (undefined1 *)(param_1 + -1);
  uVar4 = (uint)in_RAX;
  if (puVar10 != (undefined1 *)0x0 && in_ZF == '\0') {
    uVar4 = uVar4 | *(uint *)(longlong)(int)uVar4 |
            *(uint *)(longlong)(int)(uVar4 | *(uint *)(longlong)(int)uVar4);
    pbVar1 = (byte *)((longlong)param_2 + (longlong)puVar10 * 2 + 0x2100);
    *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar8;
    uVar4 = uVar4 | *(uint *)(longlong)(int)uVar4 |
            *(uint *)(longlong)(int)(uVar4 | *(uint *)(longlong)(int)uVar4);
    pbVar1 = (byte *)((longlong)param_2 + (longlong)puVar10 * 2 + 0x8120100);
    *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
    *(char *)param_2 = (char)*param_2 + cVar8;
    if ((char)*param_2 == '\0') {
      param_1 = param_1 + -2;
      pbVar1 = (byte *)((ulonglong)uVar4 * 9);
      *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
      *param_2 = *param_2 & (uint)param_1;
      uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                       CONCAT11((byte)(uVar4 >> 8) | *(byte *)(lStackX_8 + (ulonglong)uVar4),
                                (char)uVar4)) + 0x20000534;
      uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
      puVar7 = (uint *)(ulonglong)uVar4;
      *(char *)(unaff_RBP + 0x21004a) = *(char *)(unaff_RBP + 0x21004a) + (char)uVar4;
      *(char *)puVar7 = (char)*puVar7 + (char)uVar4;
      *(byte *)((longlong)puVar7 + 0xb) =
           *(byte *)((longlong)puVar7 + 0xb) & (byte)((ulonglong)param_1 >> 8);
      pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x68);
      *pcVar5 = *pcVar5 + unaff_BH;
      uVar4 = uVar4 | *puVar7;
      *(char *)(unaff_RBP + 0xf01004a) = *(char *)(unaff_RBP + 0xf01004a) + (byte)uVar4;
      *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | (byte)uVar4;
      *unaff_RDI = *unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)param_2 = (char)*param_2 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = uVar4 | *in_RAX;
  if (uVar4 == 0) {
    *puVar10 = *puVar10;
    unaff_RDI = (char *)(ulonglong)bRam0000000000000000;
  }
  else {
    *puVar10 = *puVar10;
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
    cVar8 = (char)(uVar4 >> 8);
    uVar2 = *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    pcVar5 = (char *)(ulonglong)uVar2;
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar8 + unaff_BL,(char)uVar4 + cVar8));
    uVar4 = uVar4 | *(uint *)(in_FS_OFFSET + (ulonglong)uVar4);
    if (uVar4 != 0) {
      *pcVar5 = *pcVar5;
      uVar4 = uVar4 + 0x74050002;
      bVar3 = (char)uVar4 + *(char *)(ulonglong)uVar4;
      pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3);
      bVar9 = (byte)(uVar4 >> 8);
      *(byte *)(unaff_RSI + 0xb) = *(byte *)(unaff_RSI + 0xb) & bVar9;
      *(char *)((longlong)param_2 + 0xb66) = *(char *)((longlong)param_2 + 0xb66) + (char)uVar2;
      *pcVar5 = *pcVar5 + bVar9;
      *pcVar6 = *pcVar6 + bVar3;
      *pcVar6 = *pcVar6 + bVar9;
      bVar3 = bVar3 | (byte)*(undefined2 *)pcVar6;
      pcVar6 = (char *)(ulonglong)
                       CONCAT22((short)(uVar4 >> 0x10),
                                CONCAT11(*(undefined1 *)(unaff_RSI + 0xb),bVar3));
      *pcVar6 = *pcVar6 + bVar3;
      *pcVar5 = *pcVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  pcVar5 = (char *)((ulonglong)unaff_RDI & 0xffffffff ^ 0x13);
  *pcVar5 = *pcVar5 + (char)(((ulonglong)unaff_RDI & 0xffffffff) >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

