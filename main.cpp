#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>

/** @brief ftp上传上来的原始检测数据帧*/
class ocsRawData {
public:
    typedef std::shared_ptr<ocsRawData> Ptr;
    float Stagger;            /**< @brief 拉出值*/
    float Height;             /**< @brief 导高*/
    float Pressure_sub[4];    /**< @brief 压力分力*/
    float Pressure;           /**< @brief 压力和*/
    float Yingli[6];          /**< @brief 应力*/
    float HardPoint_JYZ[3];   /**< @brief 支架硬点分量*/
    float HardPoint_Left[3];  /**< @brief 左弓头硬点分量*/
    float HardPoint_Right[3]; /**< @brief 右弓头硬点分量*/
    float Temprature_Max;     /**< @brief 弓网温度最高值*/
    float Temprature_Min;     /**< @brief 弓网温度最低值*/
    float HorizontalSpace;    /**< @brief 水平间距*/
    float VerticalSpace;      /**< @brief 垂直高差*/
    float HeightRate;         /**< @brief 导高变化率*/
    float Rhrate;             /**< @brief 燃弧率*/
    uint64_t Rhtime;          /**< @brief 燃弧时间*/
    float RhPower;            /**< @brief 燃弧强度*/
    float Mh;                 /**< @brief 磨耗*/
    float iSpeed;             /**< @brief 速度*/
    int Rhindex;              /**< @brief 燃弧索引*/
    bool bPolesign;           /**< @brief 实测定位点*/
    uint64_t uMileage;        /**< @brief 里程(单位毫米)*/
    uint64_t uKmsign;         /**< @brief 公里标*/
    uint64_t uTime;           /**< @brief  unix时间*/
    uint16_t uDistanceinSpan; /**< @brief 跨内位移*/
    int poleid;               /**< @brief 杆号id*/
    int detectid;             /**< @brief 检测id*/
    bool way;                 /**< @brief 行别 true-上行 false-下行*/
    ocsRawData() {
        memset(this, 0, sizeof(ocsRawData));
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
    w.show();
    return a.exec();
}
