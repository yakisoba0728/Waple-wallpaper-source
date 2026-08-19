// Function: FUN_1404cb268
// Addr: 1404cb268
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb268(char param_1)

{
  int in_EAX;
  uint uVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong uVar3;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  char *pcVar2;
  
  uVar3 = (ulonglong)(((int)&stack0x00000000 - unaff_ESI) - (uint)in_CF);
  uVar1 = in_EAX + 0x4e40e00;
  pcVar2 = (char *)(ulonglong)uVar1;
  cRam00000001604cb5c9 = cRam00000001604cb5c9 + (char)uVar1;
  *(undefined8 *)(uVar3 - 8) = *(undefined8 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_BH;
  *(undefined8 *)(uVar3 - 0x10) =
       *(undefined8 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar2[0x21004cb1] = pcVar2[0x21004cb1] + param_1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  *pcVar2 = *pcVar2 + (char)(uVar1 >> 8);
  *(undefined8 *)(uVar3 - 0x18) =
       *(undefined8 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_BH;
  *(undefined8 *)(uVar3 - 0x20) =
       *(undefined8 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  pcVar2[0x21004cb1] = pcVar2[0x21004cb1] + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

