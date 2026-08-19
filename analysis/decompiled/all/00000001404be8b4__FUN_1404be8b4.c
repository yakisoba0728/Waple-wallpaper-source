// Function: FUN_1404be8b4
// Addr: 1404be8b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be8b4(char *param_1,uint param_2)

{
  uint in_EAX;
  char *pcVar1;
  int unaff_ESI;
  bool bVar2;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  
  pcVar1 = (char *)(ulonglong)(in_EAX & 0x4a022000);
  *param_1 = *param_1 + (char)((in_EAX & 0x4a022000) >> 8);
  *pcVar1 = *pcVar1;
  *pcVar1 = *pcVar1 + (char)param_2;
  bVar2 = CARRY4(uRam00000000c260e8db,param_2);
  uRam00000000c260e8db = uRam00000000c260e8db + param_2;
  pavgb(in_MM1_Ba,(char)uRam000000014a0bf4ab);
  pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0bf4ab >> 8));
  pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0bf4ab >> 0x10));
  pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0bf4ab >> 0x18));
  pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0bf4ab >> 0x20));
  pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0bf4ab >> 0x28));
  pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0bf4ab >> 0x30));
  pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0bf4ab >> 0x38));
  if (!SCARRY4(unaff_ESI,(uint)bVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

