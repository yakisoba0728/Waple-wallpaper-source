// Function: FUN_140349bb0
// Addr: 140349bb0
// Size: 86 bytes


ulonglong FUN_140349bb0(longlong param_1,byte *param_2,uint *param_3,undefined1 param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong in_RAX;
  
  if ((*(byte **)(param_1 + 0x40) <= param_2) &&
     (param_2 <= (byte *)(*(longlong *)(param_1 + 0x80) + -3 + (ulonglong)*(uint *)(param_1 + 0x88))
     )) {
    in_RAX = 0;
    if (*param_2 < 3) {
      *param_3 = (uint)*param_2;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte **)(param_3 + 4) = param_2 + 3;
      param_3[2] = (uint)CONCAT11(bVar2,bVar1);
      param_3[3] = 0;
      *(undefined1 *)(param_3 + 6) = param_4;
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

