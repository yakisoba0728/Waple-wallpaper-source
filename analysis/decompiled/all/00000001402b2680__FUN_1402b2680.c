// Function: FUN_1402b2680
// Addr: 1402b2680
// Size: 111 bytes


void FUN_1402b2680(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  uVar2 = (param_2 | *(uint *)(param_1 + 0x10)) & 0x17;
  *(uint *)(param_1 + 0x10) = uVar2;
  uVar2 = uVar2 & *(uint *)(param_1 + 0x14);
  if (uVar2 == 0) {
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
  uVar1 = FUN_140013b20(local_48,1);
  FUN_140013970(local_38,pcVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_1402bba60(local_38,&DAT_1404d8558);
}

