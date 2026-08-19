// Function: FUN_1404a2b6c
// Addr: 1404a2b6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2b6c(byte *param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  longlong in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  int *piVar9;
  
  pcVar2 = (char *)(in_RAX + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar2 = *pcVar2 + (char)((ulonglong)in_RAX >> 8);
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 5);
  *pbVar1 = *pbVar1 & (byte)param_2;
  cVar5 = unaff_BH * '\x02';
  uVar7 = (int)in_RAX + 0x4a2a4800;
  bVar3 = *param_1;
  bVar6 = (byte)uVar7;
  *param_1 = *param_1 + bVar6;
  uVar8 = (uint)CARRY1(bVar3,bVar6);
  uVar4 = (int)in_RAX + 0x490d47f6;
  uVar8 = (uVar4 - uVar8) + 0xff01100 + (uint)(uVar7 < 0x11d000a || uVar4 < uVar8);
  piVar9 = (int *)(ulonglong)uVar8;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || uVar8 == 0) {
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(cVar5,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(cVar5,unaff_BL)) >> 1 |
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar5,unaff_BL)) << 7;
    *param_1 = *param_1;
    *(byte *)((longlong)piVar9 + 7) = *(byte *)((longlong)piVar9 + 7) | (byte)(uVar8 >> 8);
    *unaff_RSI = *unaff_RSI ^ (byte)uVar8;
    *piVar9 = *piVar9 + param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

