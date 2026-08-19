// Function: FUN_1404adb88
// Addr: 1404adb88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adb88(undefined8 param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  byte *in_RAX;
  uint *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 auStack_8 [8];
  byte *pbVar2;
  
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((ulonglong)in_RAX >> 8);
  if (!CARRY1(param_3,*in_RAX) && (byte)(param_3 + *in_RAX) != '\0') {
    bVar1 = (char)in_RAX + *in_RAX + CARRY1(param_3,*in_RAX);
    pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
    *unaff_RDI = *unaff_RSI;
    *unaff_RBX = *unaff_RBX & (uint)auStack_8;
    *pbVar2 = *pbVar2 | bVar1;
    cRam00000001b64ae315 = cRam00000001b64ae315 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

