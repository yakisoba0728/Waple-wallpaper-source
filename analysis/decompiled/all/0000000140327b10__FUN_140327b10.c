// Function: FUN_140327b10
// Addr: 140327b10
// Size: 441 bytes


ulonglong FUN_140327b10(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x38);
  uVar4 = FUN_1402c0f34(*(undefined8 *)(*(longlong *)(*param_2 + 0x250) + (ulonglong)param_3 * 8),0,
                        10);
  lVar2 = *(longlong *)(param_1 + 0xf8);
  FUN_1402f71a0(lVar2);
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined4 *)(lVar2 + 0xc0) = 0;
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  *(undefined4 *)(lVar2 + 0xd8) = 0;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined4 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  uVar5 = (**(code **)(lVar1 + 0x78))(*(undefined8 *)(param_1 + 0xf8),param_2[8],uVar4,param_4 | 8);
  if ((int)uVar5 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar1 + 0x60);
    uVar3 = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    uVar3 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = uVar3;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0xb8);
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    uVar3 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar1 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar1 + 0x90);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar1 + 0x94);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar1 + 0xc0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar1 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar1 + 0xd8);
    uVar5 = uVar5 & 0xffffffff;
  }
  return uVar5;
}

