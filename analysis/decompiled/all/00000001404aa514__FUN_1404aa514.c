// Function: FUN_1404aa514
// Addr: 1404aa514
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa514(char *param_1,longlong param_2)

{
  byte *pbVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  char unaff_SPL;
  undefined7 unaff_00000021;
  
  pbVar1 = (byte *)(param_2 + 0x2052100 + (longlong)param_1 * 2);
  *pbVar1 = *pbVar1 & (byte)(in_EAX >> 8);
  cRam000000011b4ab015 = cRam000000011b4ab015 + (byte)in_EAX;
  *(char *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + unaff_SPL;
  uVar2 = CONCAT31((int3)((in_EAX | 0xdfae400) >> 8),
                   (byte)in_EAX | *(byte *)((ulonglong)(in_EAX | 0xdfae400) * 2)) + 0x60000664;
  uVar3 = uVar2 | 0xdfb8000;
  uVar2 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11((char)(uVar3 >> 8) + (char)((ulonglong)param_1 >> 8),(char)uVar2)) +
          0x21004a;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

