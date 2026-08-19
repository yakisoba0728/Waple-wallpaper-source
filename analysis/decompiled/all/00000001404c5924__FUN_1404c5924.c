// Function: FUN_1404c5924
// Addr: 1404c5924
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c58f9) overlaps instruction at (ram,0x0001404c58f7)
    */

void FUN_1404c5924(char *param_1,byte *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar8;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *in_RAX;
  byte bVar10;
  byte unaff_BL;
  undefined7 unaff_00000019;
  uint *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  bool in_OF;
  char *unaff_retaddr;
  undefined1 auStackX_8 [32];
  undefined7 uVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  if (in_OF) {
    cVar4 = (char)in_RAX;
    bVar8 = (byte)((ulonglong)in_RAX >> 8) & *(byte *)((longlong)unaff_RSI + 0x3871002e);
    pcVar7 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar8,cVar4));
    *pcVar7 = *pcVar7 + cVar4;
    *pcVar7 = *pcVar7 + cVar4;
    param_1[-0x5a] = param_1[-0x5a] + (char)param_1;
    *(char *)((longlong)unaff_RSI + -0x5a) = *(char *)((longlong)unaff_RSI + -0x5a) + unaff_BL;
    param_1[0x38] = param_1[0x38] + bVar10;
    *pcVar7 = *pcVar7 + cVar4;
    *pcVar7 = *pcVar7 + cVar4;
    *param_1 = *param_1 + unaff_BL;
    *unaff_RSI = *unaff_RSI & (uint)pcVar7;
    *unaff_RDI = *unaff_RDI + (char)param_1;
    piVar5 = (int *)(param_1 + 0x6f00800);
    *piVar5 = *piVar5 + (int)param_1;
    param_1 = param_1 + -1;
    if (param_1 != (char *)0x0 && *piVar5 != 0) {
      *(byte *)unaff_RSI = (byte)*unaff_RSI >> 1;
      *pcVar7 = *pcVar7 + (char)param_2;
    }
    *param_2 = *param_2 << 1 | (char)*param_2 < '\0';
    *pcVar7 = '\0';
    *pcVar7 = *pcVar7 + (char)param_2;
    uVar9 = (undefined7)((ulonglong)pcVar7 >> 8);
    piVar5 = (int *)CONCAT71(uVar9,cVar4);
    *param_1 = *param_1 + bVar8;
    *piVar5 = *piVar5 - (int)param_1;
    *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
    if (*param_1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar8 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + unaff_BL;
    LOCK();
    cVar1 = *(char *)(in_FS_OFFSET + (longlong)piVar5);
    *(char *)(in_FS_OFFSET + (longlong)piVar5) = cVar4;
    UNLOCK();
    puVar6 = (undefined4 *)CONCAT71(uVar9,cVar1 + 'T' + CARRY1(bVar8,unaff_BL));
    LOCK();
    uVar2 = *puVar6;
    *puVar6 = (int)puVar6;
    pcVar7 = (char *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar2);
    UNLOCK();
    pcVar7[(longlong)param_1 * 4] = pcVar7[(longlong)param_1 * 4] | bVar10;
    pcVar7[-0x5a] = pcVar7[-0x5a] + bVar10;
    *param_2 = *param_2 + (char)uVar2;
    *pcVar7 = *pcVar7 + unaff_BL;
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
    *param_1 = *param_1 + unaff_R12B;
    *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
    unaff_retaddr[-0x5a] = unaff_retaddr[-0x5a] + bVar10;
    in_RAX = unaff_retaddr;
  }
  *param_2 = *param_2 + (char)in_RAX;
  *in_RAX = *in_RAX + unaff_BL;
  uVar3 = *(undefined8 *)register0x00000020;
  *param_1 = *param_1 + param_3;
  bVar10 = (byte)uRam0000000144b06437;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *param_1 = *param_1 + (((byte)uVar3 | bVar10) ^ 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

