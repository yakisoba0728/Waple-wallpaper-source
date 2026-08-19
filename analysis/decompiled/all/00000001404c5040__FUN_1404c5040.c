// Function: FUN_1404c5040
// Addr: 1404c5040
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5040(int param_1,int *param_2)

{
  int iVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 in_RAX;
  undefined7 uVar8;
  char *pcVar7;
  uint uVar9;
  uint *unaff_RBX;
  undefined4 *unaff_RSI;
  int unaff_EDI;
  char in_CF;
  char *pcVar10;
  
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = ((char)in_RAX + '\f') - in_CF;
  *(byte *)CONCAT71(uVar8,bVar4) = *(byte *)CONCAT71(uVar8,bVar4) | bVar4;
  iVar6 = ((uint)CONCAT71(uVar8,bVar4 - 0x2c | *(byte *)CONCAT71(uVar8,bVar4 - 0x2c)) | 100) +
          0xf0000d54;
  bVar4 = (byte)((uint)param_1 >> 8);
  uVar2 = (undefined3)((uint)iVar6 >> 8);
  cVar5 = (byte)iVar6 + bVar4;
  uVar9 = param_1 + *param_2 + (uint)CARRY1((byte)iVar6,bVar4);
  pcVar10 = (char *)(ulonglong)uVar9;
  *unaff_RBX = *unaff_RBX & (uint)param_2;
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,cVar5);
  iVar1 = *(int *)(pcVar7 + 2);
  *pcVar7 = *pcVar7 + (char)uVar9;
  cVar3 = (char)((ulonglong)param_2 >> 8) * '\x02';
  pcVar7 = (undefined1 *)(ulonglong)(uint)(unaff_EDI + iVar1) + (longlong)pcVar10 * 2 + 0x4c;
  *pcVar7 = *pcVar7 + (char)(uVar9 >> 8);
  *pcVar10 = *pcVar10 + (char)((uint)iVar6 >> 8);
  uVar9 = (CONCAT31(uVar2,cVar5) ^ 0x11) + 0x68050002;
  iVar6 = uVar9 + *(int *)(ulonglong)uVar9;
  out(*unaff_RSI,CONCAT11(cVar3,(char)param_2));
  if (pcVar10 == (char *)0x1 || iVar6 != 0) {
    pcVar7 = (char *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                               CONCAT22((short)((ulonglong)param_2 >> 0x10),
                                        CONCAT11(cVar3,(char)param_2))) + -0x73ffd21f);
    *pcVar7 = *pcVar7 + (char)((uint)iVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(ulonglong)(uint)(unaff_EDI + iVar1) = *(undefined1 *)(unaff_RSI + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

