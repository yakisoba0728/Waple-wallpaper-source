// Function: FUN_1404d0350
// Addr: 1404d0350
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0350(undefined4 param_1,char param_2)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  short sVar5;
  uint *in_RAX;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  char unaff_DIL;
  longlong in_FS_OFFSET;
  undefined8 uStack_10;
  
  *(byte *)(in_RAX + 2) = (byte)in_RAX[2] | (byte)((uint)param_1 >> 8);
  cVar1 = *(char *)(in_FS_OFFSET + (longlong)unaff_RBP);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  if (!SCARRY1((char)uVar4,(char)in_RAX)) {
    uRam01004d0200003866 = (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar5 = (short)in_RAX + -0x2f8;
  puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar2 = '\x04';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  pbVar6 = (byte *)(ulonglong)(uint)(int)sVar5;
  *pbVar6 = *pbVar6 | (byte)sVar5;
  pcVar3 = (code *)swi(3);
  (*pcVar3)((char)param_1 + cVar1,param_2 + unaff_DIL);
  return;
}

