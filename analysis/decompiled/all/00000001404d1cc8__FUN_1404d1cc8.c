// Function: FUN_1404d1cc8
// Addr: 1404d1cc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1cc8(int param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar5;
  undefined8 in_RAX;
  undefined7 uVar6;
  char *pcVar4;
  char *pcVar7;
  int *unaff_RBP;
  uint *unaff_RSI;
  byte in_CF;
  bool bVar8;
  longlong lVar3;
  
  pcVar7 = (char *)(ulonglong)((param_1 - *unaff_RBP) - (uint)in_CF);
  bVar1 = (byte)in_RAX;
  bVar8 = bRam00000001534d69ee < bVar1;
  bRam00000001534d69ee = bRam00000001534d69ee - bVar1;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = (bVar1 + 0xb3) - bVar8;
  lVar3 = CONCAT71(uVar6,cVar2);
  pcVar7[(longlong)param_2] = pcVar7[(longlong)param_2] + cVar2;
  *(undefined1 *)((longlong)unaff_RBP + 0x39) = *(undefined1 *)((longlong)unaff_RBP + 0x39);
  *param_2 = *param_2 << 0x1a | *param_2 >> 6;
  *(byte *)(lVar3 + 0x39) = *(byte *)(lVar3 + 0x39) & (byte)((ulonglong)param_2 >> 8);
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  *(char *)(lVar3 + 0x4e506) = *(char *)(lVar3 + 0x4e506) + cVar5;
  *unaff_RSI = *unaff_RSI | (uint)lVar3;
  pcVar4 = (char *)(CONCAT71(uVar6,cVar2 + 'e') | 2);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  *pcVar7 = *pcVar7 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

