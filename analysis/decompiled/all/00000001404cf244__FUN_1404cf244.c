// Function: FUN_1404cf244
// Addr: 1404cf244
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cf274) overlaps instruction at (ram,0x0001404cf273)
    */

void FUN_1404cf244(char *param_1,undefined2 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  short in_AX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  char unaff_BL;
  undefined1 *puVar9;
  int unaff_EBP;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  undefined1 *unaff_retaddr;
  char cStackX_8;
  undefined1 auStackX_18 [16];
  
  pcVar7 = (char *)(ulonglong)(uint)(int)in_AX;
  *pcVar7 = *pcVar7 + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar7 = *pcVar7 + (char)in_AX;
  pcVar7[-0x68] = pcVar7[-0x68] + (char)in_AX;
  unaff_retaddr[-0x68] = unaff_retaddr[-0x68] + cStackX_8;
  *pcVar7 = *pcVar7 + cStackX_8;
  puVar9 = auStackX_18;
  *param_1 = *param_1 + param_3;
  uVar5 = (int)in_AX ^ 0x7835000a;
  uVar4 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 + *(byte *)(ulonglong)uVar5);
  uVar5 = (uint)CARRY1((byte)uVar5,*(byte *)(ulonglong)uVar5);
  uVar3 = uVar4 + 0xf4fffc98;
  uVar6 = uVar3 - uVar5;
  if ((uVar4 < 0xb000368 || uVar3 < uVar5) ||
     (pbVar8 = (byte *)(param_1 + -1), pbVar8 != (byte *)0x0 && uVar6 != 0)) {
    param_2 = CONCAT11((char)((ushort)param_2 >> 8) + *(char *)(ulonglong)uVar6,(char)param_2);
    puVar9 = (undefined1 *)(ulonglong)(uint)((int)auStackX_18 + unaff_EBP);
  }
  else {
    if (SBORROW4(uVar4,0xb000368) == SBORROW4(uVar3,uVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar8 = *pbVar8 ^ (byte)uVar6;
    in(param_2);
  }
  do {
    in(param_2);
    *unaff_retaddr = 3;
    puVar1 = (undefined1 *)((longlong)unaff_RDI * 2 + 0x1115a000a);
    *puVar1 = *puVar1;
    bRam00000000a8cf0003 = bRam00000000a8cf0003 | 3;
  } while ((char)bRam00000000a8cf0003 < '\0');
  if (bRam00000000a8cf0003 != 0xfd) {
    uVar2 = in(param_2);
    *unaff_RDI = uVar2;
    *(undefined1 **)(puVar9 + -8) = puVar9;
    cRam00000001464d08aa = cRam00000001464d08aa + -0x68;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

