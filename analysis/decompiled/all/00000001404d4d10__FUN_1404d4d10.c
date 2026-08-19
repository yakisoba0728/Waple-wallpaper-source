// Function: FUN_1404d4d10
// Addr: 1404d4d10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4d10(longlong param_1,byte *param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 in_RAX;
  undefined8 uVar5;
  byte bVar7;
  undefined1 *unaff_RSI;
  char in_R10B;
  undefined7 in_register_00000091;
  longlong unaff_R13;
  char *pcVar6;
  
  bVar7 = (byte)param_1;
  *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 0x4c) - bVar7;
  *(char *)(unaff_R13 + 0x4c) = *(char *)(unaff_R13 + 0x4c) + in_R10B;
  pcVar6 = (char *)(CONCAT71(in_register_00000091,in_R10B) + param_1);
  *pcVar6 = *pcVar6 + param_3;
  uVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam2ba8803e80003972);
  bVar1 = *param_2;
  *param_2 = *param_2 + bVar7;
  iVar4 = ((int)uVar5 + -0x2be0002) - (uint)CARRY1(bVar1,bVar7);
  cVar3 = (char)iVar4 + '&';
  uVar2 = CONCAT31((int3)((uint)iVar4 >> 8),cVar3);
  pcVar6 = (char *)(ulonglong)uVar2;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  *(uint *)(pcVar6 + CONCAT62((int6)((ulonglong)param_2 >> 0x10),(ushort)(byte)param_2)) =
       *(uint *)(pcVar6 + CONCAT62((int6)((ulonglong)param_2 >> 0x10),(ushort)(byte)param_2)) &
       uVar2;
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  out(*unaff_RSI,(ushort)(byte)param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

