// Function: FUN_1404a09b8
// Addr: 1404a09b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a09b8(undefined4 param_1,byte *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_EDI;
  
  param_2[unaff_RBX] = param_2[unaff_RBX] | (byte)((ulonglong)param_2 >> 8);
  uVar1 = in((short)param_2);
  *unaff_EDI = uVar1;
  bVar2 = *(byte *)(unaff_RBP + 3);
  *param_2 = *param_2 | (byte)param_1;
  uRam00000001245709d2 =
       uRam00000001245709d2 &
       CONCAT22((short)((uint)param_1 >> 0x10),
                CONCAT11((byte)((uint)param_1 >> 8) | bVar2,(byte)param_1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

