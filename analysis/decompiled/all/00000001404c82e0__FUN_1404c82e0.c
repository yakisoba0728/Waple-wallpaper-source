// Function: FUN_1404c82e0
// Addr: 1404c82e0
// Size: 1 bytes


void FUN_1404c82e0(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint in_EAX;
  undefined4 uVar3;
  undefined4 in_register_00000004;
  char *pcVar4;
  undefined1 uVar6;
  char cVar7;
  undefined6 uVar8;
  char cVar9;
  byte bVar10;
  longlong unaff_RSI;
  undefined4 uVar5;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar7 = (char)((ulonglong)param_1 >> 8);
  uVar6 = SUB81(param_1,0);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *param_1 = *param_1 | bVar10;
  *(char *)(unaff_RSI + 9) = *(char *)(unaff_RSI + 9) + cVar9;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  pcVar4 = (char *)func_0x0001614ccf72();
  uVar5 = (undefined4)((ulonglong)pcVar4 >> 0x20);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  pcVar1 = (char *)(CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) + -0xdffcef8);
  *pcVar1 = *pcVar1 + cVar7;
  *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) =
       *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) | bVar10;
  uVar3 = CONCAT31((int3)((ulonglong)pcVar4 >> 8),(char)pcVar4 + cVar9);
  puVar2 = (uint *)(CONCAT44(uVar5,uVar3) + 0x21 + CONCAT44(uVar5,uVar3));
  *puVar2 = *puVar2 | 0x30000000;
  *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) =
       *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) | bVar10;
  pcVar1 = (char *)(CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) + -0x3fffcef8);
  *pcVar1 = *pcVar1 + cVar7;
  puVar2 = (uint *)(CONCAT44(uVar5,uVar3) + 0x21 + CONCAT44(uVar5,uVar3));
  *puVar2 = *puVar2 | 0x800;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

