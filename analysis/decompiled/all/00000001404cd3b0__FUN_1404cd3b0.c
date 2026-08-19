// Function: FUN_1404cd3b0
// Addr: 1404cd3b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd3b0(char *param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  uint *in_RAX;
  int *piVar3;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte *unaff_retaddr;
  char *pcVar4;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  *(byte *)((longlong)in_RAX + 0x41) =
       *(byte *)((longlong)in_RAX + 0x41) + unaff_BL + CARRY1((byte)uVar2,(byte)in_RAX);
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *(char *)(param_3 + 0x19004cd2) = *(char *)(param_3 + 0x19004cd2) + (byte)unaff_retaddr;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),
                           ((byte)unaff_retaddr | *unaff_retaddr) + 1);
  uVar2 = (int)piVar3 - *piVar3 | 0x9e00bf0;
  pcVar4 = (char *)(ulonglong)uVar2;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar6 = (char)((ulonglong)param_2 >> 8) + *pcVar4;
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                   CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) * 8);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) + 1);
  *pcVar1 = *pcVar1 + (char)param_3;
  *pcVar4 = *pcVar4 + (char)uVar2;
  *param_1 = *param_1 - cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

