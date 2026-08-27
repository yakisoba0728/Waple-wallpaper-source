// Function: FUN_140013b50
// Addr: 140013b50
// Size: 104 bytes


void FUN_140013b50(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  uVar2 = param_2 & *(uint *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = param_2 & 0x17;
  if ((uVar2 & 0x17) == 0) {
    return;
  }
  if ((uVar2 & 4) == 0) {
    pcVar3 = "ios_base::failbit set";
    if ((uVar2 & 2) == 0) {
      pcVar3 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar3 = "ios_base::badbit set";
  }
  uVar1 = FUN_140013b20(local_38,1);
  uVar1 = FUN_140013970(local_28,pcVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_140017300(uVar1);
}

