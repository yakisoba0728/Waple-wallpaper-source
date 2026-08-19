// Function: FUN_1404c5dfc
// Addr: 1404c5dfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5dfc(undefined8 param_1,char *param_2)

{
  undefined2 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  longlong in_RAX;
  char cVar6;
  undefined1 uVar7;
  undefined6 uVar8;
  char cVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar5;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar7 = (undefined1)((ulonglong)param_1 >> 8);
  *(char *)(in_RAX + 0x21004ad4) = *(char *)(in_RAX + 0x21004ad4) + (char)in_RAX;
  iVar4 = (int)in_RAX + 0x2fab702;
  cVar6 = (char)param_1 + unaff_BL;
  uVar1 = (undefined2)((uint)iVar4 >> 0x10);
  sVar3 = (short)(char)iVar4 * (short)*unaff_RSI;
  pcVar5 = (char *)(ulonglong)CONCAT22(uVar1,sVar3);
  *pcVar5 = *pcVar5 + (char)param_2;
  *(char *)(CONCAT62(uVar8,CONCAT11(uVar7,cVar6)) ^ 0x2e00) =
       *(char *)(CONCAT62(uVar8,CONCAT11(uVar7,cVar6)) ^ 0x2e00) + unaff_R12B;
  cVar2 = (char)sVar3;
  *pcVar5 = *pcVar5 + cVar2;
  *(char *)(unaff_RDI + -0x26ffd10b) = *(char *)(unaff_RDI + -0x26ffd10b) + cVar9;
  sVar3 = (short)cVar2 * (short)*unaff_RSI;
  pcVar5 = (char *)(ulonglong)CONCAT22(uVar1,sVar3);
  *pcVar5 = *pcVar5 + (char)param_2;
  *(char *)(CONCAT62(uVar8,CONCAT11(uVar7,cVar6)) ^ 0x2e00) =
       *(char *)(CONCAT62(uVar8,CONCAT11(uVar7,cVar6)) ^ 0x2e00) + unaff_R12B;
  *param_2 = *param_2 + unaff_BL;
  cVar2 = in(9);
  *unaff_RSI = *unaff_RSI + cVar6;
  if (*unaff_RSI != '\0') {
    cRam00000001604c646d = cRam00000001604c646d + cVar2;
  }
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar9;
  *(char *)(CONCAT62(uVar8,CONCAT11(uVar7,cVar6)) ^ 0x2e00) =
       *(char *)(CONCAT62(uVar8,CONCAT11(uVar7,cVar6)) ^ 0x2e00) + (char)((ushort)sVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

