// Function: FUN_1404b4a30
// Addr: 1404b4a30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4a30(longlong param_1)

{
  uint uVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  undefined8 in_MM0;
  uint uVar2;
  
  pmulhuw(in_MM0,*(undefined8 *)(in_RAX * 2));
  uVar2 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)(unaff_RBX + param_1),
                                  (char)in_RAX));
  uVar1 = uVar2 + 0xfc000a34;
  *(int *)(ulonglong)uVar1 = (*(int *)(ulonglong)uVar1 - uVar1) - (uint)(0x3fff5cb < uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

