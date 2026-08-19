// Function: FUN_1404b5ccc
// Addr: 1404b5ccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5ccc(longlong param_1,uint param_2,char *param_3,byte *param_4)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  char *pcVar3;
  byte *unaff_RBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  bool bVar4;
  char in_ZF;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  char *unaff_retaddr;
  
  pcVar3 = (char *)(ulonglong)param_2;
  bVar1 = (byte)param_2;
  if (param_1 == 1 || in_ZF == '\0') {
    bVar4 = CARRY1(*unaff_RBX,(byte)unaff_RBX);
    *unaff_RBX = *unaff_RBX + (byte)unaff_RBX;
    if (param_1 != 1) {
      *pcVar3 = *pcVar3 + bVar1;
      *param_4 = *param_4 + 8;
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar1;
      *pcVar3 = *pcVar3 + bVar1;
      *param_3 = *param_3 + (char)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*unaff_RBX == 0) {
code_r0x0001404b5d09:
      iVar2 = param_2 + 0x62150009 + (uint)bVar4;
      pavgb(in_MM1_Ba,(char)uRam000000014a0b68e7);
      pavgb(in_MM1_Bb,(char)((ulonglong)uRam000000014a0b68e7 >> 8));
      pavgb(in_MM1_Bc,(char)((ulonglong)uRam000000014a0b68e7 >> 0x10));
      pavgb(in_MM1_Bd,(char)((ulonglong)uRam000000014a0b68e7 >> 0x18));
      pavgb(in_MM1_Be,(char)((ulonglong)uRam000000014a0b68e7 >> 0x20));
      pavgb(in_MM1_Bf,(char)((ulonglong)uRam000000014a0b68e7 >> 0x28));
      pavgb(in_MM1_Bg,(char)((ulonglong)uRam000000014a0b68e7 >> 0x30));
      pavgb(in_MM1_Bh,(char)((ulonglong)uRam000000014a0b68e7 >> 0x38));
      if (SCARRY4(iVar2,unaff_ESI) ==
          SCARRY4(iVar2 + unaff_ESI,
                  (uint)(0x9deafff6 < param_2 || CARRY4(param_2 + 0x62150009,(uint)bVar4)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar3 = (char *)(ulonglong)
                     CONCAT22((short)(param_2 >> 0x10),CONCAT11((char)(param_2 >> 8) + -1,bVar1));
  }
  else {
    if (param_1 != 2 && in_ZF == '\0') {
      bVar4 = CARRY1(*param_4,bVar1);
      *param_4 = *param_4 + bVar1;
      goto code_r0x0001404b5d09;
    }
    *(char *)((ulonglong)in_EAX - 0x13ffe51f) =
         *(char *)((ulonglong)in_EAX - 0x13ffe51f) + (char)in_EAX;
  }
  *param_4 = *param_4 + 8;
  *unaff_retaddr = *unaff_retaddr + (char)pcVar3;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

