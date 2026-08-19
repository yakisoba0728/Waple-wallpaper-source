// Function: FUN_1404cb6cc
// Addr: 1404cb6cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb6cc(longlong param_1,undefined2 param_2)

{
  int in_EAX;
  uint uVar1;
  char cVar2;
  undefined6 uVar5;
  char *pcVar4;
  longlong unaff_RBX;
  longlong lVar3;
  
  uVar1 = in_EAX + 0x70000a64;
  lVar3 = param_1 + -1;
  cVar2 = (char)lVar3;
  uVar5 = (undefined6)((ulonglong)lVar3 >> 0x10);
  if (lVar3 == 0 || uVar1 != 0) {
    *(char *)(unaff_RBX + -0x13ffcc1f) = *(char *)(unaff_RBX + -0x13ffcc1f) + cVar2;
    pcVar4 = (char *)CONCAT62(uVar5,CONCAT11(0x4c,cVar2));
    *pcVar4 = *pcVar4 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(CONCAT11((byte)((ushort)param_2 >> 8) | *(byte *)(unaff_RBX + param_1),(char)param_2));
  pcVar4 = (char *)CONCAT62(uVar5,CONCAT11(0x4c,cVar2));
  *pcVar4 = *pcVar4 + ((byte)((uVar1 ^ *(uint *)(ulonglong)uVar1) >> 8) ^
                      (byte)((uint)*(undefined4 *)(ulonglong)(uVar1 ^ *(uint *)(ulonglong)uVar1) >>
                            8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

