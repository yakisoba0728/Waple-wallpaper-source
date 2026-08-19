// Function: FUN_1404cdba8
// Addr: 1404cdba8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdba8(char *param_1,uint *param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  uint *unaff_RBX;
  uint unaff_ESP;
  byte *pbVar6;
  
  bVar4 = (byte)param_1;
  cRam00000001761f91af = cRam00000001761f91af << (bVar4 & 0x1f);
  cVar3 = (char)in_RAX;
  in_RAX[0x21004cda] = in_RAX[0x21004cda] + cVar3;
  *in_RAX = *in_RAX + cVar3;
  *in_RAX = *in_RAX + cVar3;
  cRam00000001761f89bf = cRam00000001761f89bf << (bVar4 & 0x1f);
  *(char *)(param_2 + (longlong)unaff_RBX * 2 + 0x13) =
       (char)param_2[(longlong)unaff_RBX * 2 + 0x13] + (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar3;
  uVar5 = (uint)in_RAX | *param_2;
  *(byte *)unaff_RBX = (char)*unaff_RBX + bVar4;
  uVar2 = (undefined3)(uVar5 >> 8);
  bVar4 = (char)uVar5 + 0x50;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  *unaff_RBX = *unaff_RBX & (uint)param_2;
  *pbVar6 = *pbVar6 | bVar4;
  pcVar1 = (char *)((ulonglong)(CONCAT31(uVar2,bVar4 | *pbVar6) | unaff_ESP | 0xf640400) - 0x24);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

