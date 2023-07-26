#include "DistrhoPlugin.hpp"

class MyPlugin : public DISTRHO::Plugin
{
public:
    MyPlugin()
        : DISTRHO::Plugin(0, 0, 0) // Set jumlah parameter, program, dan state
    {
        // Inisialisasi pengaturan default plugin Anda di sini (jika ada)
    }

    ~MyPlugin() override {}

    // Implementasikan metode ini untuk mengisi data audio Anda
    void run(const float** inputs, float** outputs, uint32_t frames,
             const DISTRHO::AudioPortCount*,
             const DISTRHO::AudioPortCount*, const float**) override
    {
        // Isi logika pemrosesan audio Anda di sini
        // inputs adalah data audio masukan
        // outputs adalah tempat Anda menulis data audio keluaran
        // frames adalah jumlah sampel audio yang diproses
    }

    // Implementasikan metode ini untuk mengatur parameter plugin
    void parameterChanged(uint32_t index, float value) override
    {
        // Handle perubahan parameter Anda di sini
    }
};

// Fungsi untuk membuat objek plugin baru
DISTRHO::Plugin* createPlugin()
{
    return new MyPlugin();
}

// Entry point untuk plugin, jangan ubah kode di bawah ini
int main()
{
    return DISTRHO::Framework::main(createPlugin);
}

