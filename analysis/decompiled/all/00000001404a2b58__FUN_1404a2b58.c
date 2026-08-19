// Function: FUN_1404a2b58
// Addr: 1404a2b58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2b58(undefined8 param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *in_RAX;
  char *pcVar5;
  char cVar7;
  byte *pbVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  ulonglong unaff_RDI;
  int *piVar6;
  
  cVar7 = (char)param_1 - *param_2;
  pbVar8 = (byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar7);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  *(byte *)((longlong)in_RAX + 0x49) = *(byte *)((longlong)in_RAX + 0x49) + unaff_BH;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  pcVar5 = (char *)(unaff_RDI & 0xffffffff);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  uVar2 = (uint)(short)pcVar5;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)((ulonglong)pcVar5 >> 8);
  uVar3 = uVar2 + 0x553ff00;
  *(char *)((ulonglong)uVar3 + 0x2a) = *(char *)((ulonglong)uVar3 + 0x2a) + cVar7;
  bVar1 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)uVar3;
  uVar4 = (uint)CARRY1(bVar1,(byte)uVar3);
  uVar4 = ((uVar2 + 0x436fef6) - uVar4) + 0xff01100 +
          (uint)(uVar3 < 0x11d000a || uVar2 + 0x436fef6 < uVar4);
  piVar6 = (int *)(ulonglong)uVar4;
  pbVar8 = pbVar8 + -1;
  if (pbVar8 == (byte *)0x0 || uVar4 == 0) {
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 1 |
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 7;
    *pbVar8 = *pbVar8;
    *(byte *)((longlong)piVar6 + 7) = *(byte *)((longlong)piVar6 + 7) | (byte)(uVar4 >> 8);
    *unaff_RSI = *unaff_RSI ^ (byte)uVar4;
    *piVar6 = *piVar6 + (int)param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

