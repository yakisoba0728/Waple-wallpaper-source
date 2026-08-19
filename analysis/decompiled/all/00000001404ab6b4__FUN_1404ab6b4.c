// Function: FUN_1404ab6b4
// Addr: 1404ab6b4
// Size: 1 bytes


void FUN_1404ab6b4(int *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  byte *in_RAX;
  uint *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  uint unaff_EBX;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar4 = (undefined2)((ulonglong)param_1 >> 0x10);
  *param_1 = *param_1 + (int)param_1;
  *(uint *)(param_2 + 0x5003e005) = *(uint *)(param_2 + 0x5003e005) | (uint)param_2;
  cVar6 = (char)((ulonglong)param_2 >> 8) + *in_RAX;
  *(uint *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,(char)param_2))) =
       *(uint *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,(char)param_2))) & unaff_EBX;
  bVar1 = (byte)in_RAX;
  *in_RAX = *in_RAX | bVar1;
  *in_RAX = *in_RAX | bVar1;
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1 + (char)((ulonglong)in_RAX >> 8));
  *puVar3 = *puVar3 | (uint)puVar3;
  uVar2 = (uint)puVar3 | 0x5001174;
  LocalDescriptorTableRegister(*(undefined2 *)(in_FS_OFFSET + (ulonglong)uVar2));
  uVar2 = uVar2 & 0x254b000f;
  verr();
  *(undefined1 *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(0x4a,(char)param_1))) =
       *(undefined1 *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(0x4a,(char)param_1)));
  *unaff_RSI = *unaff_RSI + (char)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

