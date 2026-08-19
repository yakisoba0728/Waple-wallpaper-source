// Function: FUN_1404a4414
// Addr: 1404a4414
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4414(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  uint uVar4;
  int unaff_ESI;
  bool bVar5;
  bool in_SF;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  char *pcVar3;
  
  if (!in_SF) {
    param_1[0x14000778] = param_1[0x14000778] + (char)((uint)in_EAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *param_1;
  bRamc007d009e00bf00d = (byte)in_EAX;
  *param_1 = *param_1 + bRamc007d009e00bf00d;
  *(uint *)param_1 = *(int *)param_1 + (int)param_1 + (uint)CARRY1(bVar1,bRamc007d009e00bf00d);
  *param_1 = *param_1 + (char)param_2;
  uVar2 = in_EAX + 0x3600470;
  pcVar3 = (char *)(ulonglong)uVar2;
  uVar4 = CONCAT22((short)((uint)param_2 >> 0x10),
                   CONCAT11((char)((uint)param_2 >> 8) + *pcVar3,(char)param_2));
  *pcVar3 = *pcVar3 + (char)uVar2;
  bVar5 = CARRY4(uRam00000001025f4447,uVar4);
  uRam00000001025f4447 = uRam00000001025f4447 + uVar4;
  pavgb(in_MM1_Ba,(char)uRam000000014a0a5017);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0a5017 >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0a5017 >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0a5017 >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0a5017 >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0a5017 >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0a5017 >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0a5017 >> 0x38));
  if (SCARRY4(uVar2,unaff_ESI) == SCARRY4(uVar2 + unaff_ESI,(uint)bVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

